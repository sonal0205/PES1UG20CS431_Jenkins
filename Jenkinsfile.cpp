pipeline{
  agent any
  stages{
    stage('Build'){
      steps{
        sh 'g++ -o file_exec file.cpp'
      }
   }
    
    stage('Test'){
      steps{
        echo 'Deployement successful fro PES1UG20CS431'
      }
    }
  }
  post{
    failure{
      echo 'Pipeline failed.'
    }
  }
}
