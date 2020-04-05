pipeline
{
    agent {
        kubernetes {
           label "jen-agent-${UUID.randomUUID().toString()}"
           yaml """
apiVersion: v1
kind: Pod
metadata:
  labels:
    jenkins: jenkins-pipeline
spec:
  containers:
  - name: jnlp
    image: jenkins/jnlp-slave
    ttyEnabled: true
  - name: bazel
    image: bazel:1.1
    command:
    - cat
    tty: true
  securityContext:
    runAsUser: 0
"""
        }
    }
    stages {
      stage('checkout submodule') {
        steps {
          checkout([
            $class: 'GitSCM',
            branches: [[name: '*/master']], 
            doGenerateSubmoduleConfigurations: false, 
            extensions: [[
              $class: 'SubmoduleOption', 
              disableSubmodules: false, 
              parentCredentials: true, 
              recursiveSubmodules: true, 
              reference: '', 
              trackingSubmodules: false
            ]], 
            submoduleCfg: [], 
            userRemoteConfigs: [[credentialsId: 'bazel-git', url:'https://github.com/vickydev90/bazel-example-cpp.git']]])
        }
      }
      stage('bazel execute') {
        steps {
          container('bazel') {
            sh """
              export PATH=$PATH:/root/bin
              bazel run :hello
            """
          }
        }
      }
    }
 }
