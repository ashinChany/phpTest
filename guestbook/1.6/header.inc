<!-- NOTE: PLEASE DO NOT REMOVE THE BELLOW 3 LINES FROM YOUR HEADER FILE -->
<?php
include("config.php");
include("language/$default_language");
?>
<!-- NOTE: PLEASE DO NOT REMOVE THE ABOVE 3 LINES FROM YOUR HEADER FILE -->

<html>
<head>
  <title>DigiOz.com - Guestbook Version 1.6</title>
  <link rel="STYLESHEET" type="text/css" href="style.css">
</head>
<body bgcolor="#C0C0C0" text="#000000" link="#8080ff" vlink="#0000ff" alink="#ffff00"><center>
<h1><?php echo $headingtitletxt ?></h1>


<br><br>
<center>
[ <a href="guestbook.php"><b><?php echo $addentrytxt ?></b></a> ]
[ <a href="list.php?page=1"><b><?php echo $viewguestbooktxt ?></b></a> ]<br>
[ <a href="list.php?page=1"><?php echo $newpostfirsttxt ?></a> ]
[ <a href="list2.php?page=1"><?php echo $newpostlasttxt ?></a> ]</center>

<br>
<br>

<table bgcolor=#FFFFFF bordercolor=#C0C0C0 border=1 width=500><tr><td>
