//https://gprm.itsvg.in/
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
</head>
<body>
<?php

$num = readline("Enter the number: ");
echo "Multiplication table of ",$num," is\n\n";     
for ($i = 1; $i <= 10; $i++) {
  echo "\t", $num, " x ", $i, " = ", $num * $i, "\n";
}
$num = readline("Enter the number: ");
echo "Multiplication table of ",$num," is\n\n";     
for ($i = 1; $i <= 10; $i++) {
  echo "\t", $num, " x ", $i, " = ", $num * $i, "\n";
}

?>
</body>
</html>
