<?php
session_start();
$E=$_POST['email'];
$P=$_POST['pwd'];
// Create connection
$conn = mysqli_connect("localhost","root","","class") or die("Connection Failed");

// Check connection

$select="select * from user_sign where Email = '$E' && Password = '$P' ";
$result= mysqli_query($conn, $select);
$num=mysqli_num_rows($result);
if($num==1)
{
     $_SESSION['user'] = $E;
   
    echo"<script>alert('You ara successfull login');</script>";
    echo"<script>location.href='home.php';</script>";
}
else
{
    echo"<script>alert('Please correct your errors');</script>";
    echo "<script>location.href='login.php';</script>";
}
?>