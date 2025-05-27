int triangulo(double ladoa, double ladob, double ladoc){
    if ((ladoa > ladob + ladoc) || (ladob > ladoa + ladoc) || (ladoc > ladoa + ladob)) //se nao forma triangulo
    {
        return 3;
    }
    
    else{
    if (ladoa == ladob && ladob == ladoc) // equilátero
    {
        return 0;
    }
    if ((ladoa == ladob && ladob != ladoc) || (ladob == ladoc && ladoa != ladob) || (ladoa == ladoc && ladoa != ladob)) //isosceles
    {
        return 1;
    }
    
    return 2;
}
    
}
