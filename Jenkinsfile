
pipeline {
	agent { label 'CI-W10-Agent'}
	options {
		buildDiscarder(logRotator(numToKeepStr: '10'))
	}
	stages {
        stage('Build') {
            steps {
                cmakeBuild buildType: 'Release', cleanBuild: true, installation: 'MSYS', buildDir: 'artifacts', generator: "CodeBlocks - MinGW Makefiles", steps: [[withCmake: true]]
                bat 'dir'
            }
            post {
                failure {
                    cleanWs()
                }
            }
        }
        stage('Test') {
            steps {
                bat 'dir artifacts'
                ctest installation: 'InSearchPath', workingDir: 'artifacts/'
            }
            post {
                failure {
                    cleanWs()
                }
            }
        }
        stage('Archive') {
            steps {
                bat 'for /f %%d in ("artifacts\CMakeFiles", "artifacts\database_functions_test_autogen", "artifacts\Ownly_autogen", "artifacts\src", "artifacts\database_functions_test_autogen") do rd /s /q "artifacts\%%d"'
                archiveArtifacts artifacts: 'artifacts/**/**', excludes: "artifacts/Testing/**,artifacts/*.cmake, artifacts/*.tcl,artifacts/*CMake*,artifacts/*autogen*,artifacts/Makefile,artifacts/*cbp,artifacts/database_functions_test.exe"
            }
            post {
                always {
                    cleanWs()
                }
            }
        }
	}
}