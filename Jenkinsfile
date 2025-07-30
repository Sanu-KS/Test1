pipeline { 
   agent any;
   stages {
     stage ('BUILD') {
       steps {
         echo "This is Build Stage"
          sh '''
                sleep 5
                exit 0 '''
        }
      } 
      
      stage ('TEST PARALLELE') {
      parallel {
         stage ('TEST ON CHROME') {
         steps {
         echo "This is test on chrome browser"
         sh 'sleep 5; exit 1;
         }
      }
         stage ('TEST ON SAFARI') {
         steps {
         echo "This is test on Safari browser"
         sh 'sleep 5; exit 1;
        }
      } 
      stage ('DEPLOY') {
       steps {
         echo "This is Build Stage"
          sh 'sleep 5'
        }
      } 
   }    
}  
