<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>無題ドキュメント</title>
</head>

<body>
	<?php
	
	if(isset($_GET["count"])){ //countに何か入っていれば
		$count=$_GET["count"]; //経過ターンの受け取り
	}else{
		$count=0; //なければ、0を代入
	}
	
	if(isset($_GET["user"])) { 
		$user=$_GET["user"]; //答えの数字の受け取り
	}else {
		$user=rand(0,12)+1; //1～13の中からランダムに答えを決める
	}
	
	?>
	<form action="kekka.php" method="get">
		<input type="radio" name="number" value="1">1
		<input type="radio" name="number" value="2">2
		<input type="radio" name="number" value="3">3
		<input type="radio" name="number" value="4">4
		<input type="radio" name="number" value="5">5
		<input type="radio" name="number" value="6">6
		<input type="radio" name="number" value="7">7
		<input type="radio" name="number" value="8">8
		<input type="radio" name="number" value="9">9
		<input type="radio" name="number" value="10">10
		<input type="radio" name="number" value="11">11
		<input type="radio" name="number" value="12">12
		<input type="radio" name="number" value="13">13
		
		<input type="hidden" value=<?php echo $count; ?> name="count">
		<input type="hidden" value=<?php echo $user; ?> name="user">
		<br>
		<input type="submit" value="大きい" formaction="low.php">
		<input type="submit" value="小さい" formaction="high.php">
		<br><input type="submit" value="宣言" formaction="kekka.php">
	</form>
</body>
</html>
