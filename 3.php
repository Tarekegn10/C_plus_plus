<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
  
<style>
  .main{
  display: flex;

}
.item_red{
  border: 3px soild black;
  padding: 10px;
  
  background-color: red;
}
.item_blue{
  border: 3px soild black;

  padding: 10px;
  
  background-color: black;
}
*{
  padding:5px;
}

.main{
  display: flex;
  padding: 10px;
}
.prime{
  border: 2px soild red;
  background-color: blue;
}
.notPrime{
  border: 2px soild red;
  background-color: green;
}
</style>
</head>
<body>
    <?php
      
      for($i=0;$i<8;$i++){
        ?>
        <div class="main">
        <?php
        for($j=0;$j<8;$j++){
          
          if(($i+$j)%2==0){
            echo '<div class="item_red"></div>';
          }
          else{
            echo '<div class="item_blue"></div>';
          }
          
        }
        ?>
        </div>
        <?php
      }
    
    ?>
    <?php
    for($i =1;$i<12;$i++){
      echo "<div class='main'>";
      for($j =1;$j<12;$j++){
        $mu=$j*$i;
        $isPrime=true;
        for($k=2;$k<=(Integer)sqrt($mu);$k++){
          switch($mu){
            case $mu==4:
              $isPrime=false;
              break;
            case $mu==6:
              $isPrime=false;
              break;
            case $mu==9:
              $isPrime=false;
              break;
            case $mu%$k==0:
              $isPrime=false;
              break;  
          }
        }
        if($mu==1){
          $isPrime=false;
        }
        if($isPrime==true){
          echo "<div class='prime'></div>";
        }
        else{
          echo "<div class='notPrime'></div>";
        }
        
      }
      echo "</div>";
    }
    ?>
</body>
</html>