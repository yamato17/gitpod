function myGame(){
myNumber = document.getElementById("mySelect").selectedIndex;
hisNumber = Math.floor(Math.random()*3);
if( hisNumber == 0 ){
hisHand = "グー";
}
if( hisNumber == 1 ){
hisHand = "チョキ";
}
if( hisNumber == 2 ){
hisHand = "パー";
}
if( myNumber - hisNumber == -2 ){
judge = "あなたの 負け";
}
if( myNumber - hisNumber == -1 ){
judge = "あなたの 勝ち";
}
if( myNumber - hisNumber == 0 ){
judge = "両者の 引き分け";
}
if( myNumber - hisNumber == 1 ){
judge = "あなたの 負け";
}
if( myNumber - hisNumber == 2 ){
judge = "あなたの 勝ち";
}
document.getElementById("message1").innerHTML = "相手の選択は "+hisHand;
document.getElementById("message2").innerHTML = "勝敗の結果は "+judge;
}
