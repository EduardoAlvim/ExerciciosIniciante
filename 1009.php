<?php
    $nome=readline();
    $salF=(double)readline();
    $salB=(double)readline();
    $salB = $salB * (15/100);
    $salF = $salF + $salB;
    printf("TOTAL = R$ %.2f\n",$salF);
?>
