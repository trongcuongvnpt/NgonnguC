/// Khai b�o bi?n
    float a, b, c, S, CV, p;
    /// Hi?n l�n m�n h�nh ch? "Nhap a = "
    printf("Nhap a = ");
    /// L?nh nh?p (s? l?y t? b? d?m s? v?a nh?p, sau d� g�n v�o bi?n)
    scanf("%f",&a);
 
    /// Tuong t?
    printf("Nhap b = ");
    scanf("%f",&b);
 
    printf("Nhap c = ");
    scanf("%f",&c);
 
    /// T�nh chi vi
    CV = a+b+c;
    /// �ua chu vi ra m�n h�nh
    printf("Chu vi = %f\n",CV);
 
    /// T�nh p
    p = CV/2;
 
    /// T�nh di?n t�ch
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    /// �ua k?t qu? ra m�n h�nh
    printf("Dien tich = %f",S);
 
 
    return 0;
