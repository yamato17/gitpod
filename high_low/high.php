<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>大きい？</title>
</head>

<body>
	<?php
	$user=$_GET["user"]; //答えの数字の受け取り
	$number=$_GET["number"]; //プレイヤーの選択した数字の受け取り
	$count=$_GET["count"]; //経過ターンの受け取り
	
	if($user<=$number){ //選択した数字が答えの数字よりも大きい場合
		echo "はい<br>あなたの数字は";
		echo $number;
		echo "以下です";
		$count=$count+1; //経過ターンを1追加する
	}else{
		echo "いいえ<br>あなたの数字は";
		echo $number;
		echo "より大きいです";
		$count=$count+2; //違う場合、経過ターンを2追加する
	}
	?>
	<form action="mynumber.php" method="GET">
		<input type="submit" value="次の手を選ぶ">
		<input type="hidden" value=<?php echo $count; ?> name="count"> 
		<input type="hidden" value=<?php echo $user; ?> name="user"> 
	</form>
</body>
</html>
