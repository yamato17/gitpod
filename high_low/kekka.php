<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>無題ドキュメント</title>
</head>

<body>
	<?php
	$user=$_GET["user"]; //答えの数字の受け取り
	$number=$_GET["number"]; //プレイヤーの選択した数字の受け取り
	$count=$_GET["count"]; //経過ターンの受け取り
	
	if($user == $number) { //正解の場合
		echo "正解です！<br>";
		echo "あなたの数字は";
		echo $user;
		echo "です。<br>";
		echo "正解を当てるために";
		echo $count;
		echo "手かかりました。";
	}else{ //間違いの場合
		echo "違います！<br>";
		echo "あなたの数字は";
		echo $user;
		echo "でした。<br>";
		echo "あなたはこれまでに";
		echo $count;
		echo "手かかりました。";
	}
		
	?>
	
	<form action="mynumber.php" method="GET">
		<input type="submit" value="もう一度やる？">
		<input type="hidden" value=<?php echo $_GET["user"]=rand(0,12)+1; ?> name="user" >
		<input type="hidden" value=<?php echo $_GET["count"]=0; ?> name="count">
	</form>
	<form>
		<input type="submit" value="終了"　onclick= "<script type='text/javascript'>window.close();</script>" >
	</form>

</body>
	
</html>