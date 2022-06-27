/// Khai báo bi?n
    float a, b, c, S, CV, p;
    /// Hi?n lên màn hình ch? "Nhap a = "
    printf("Nhap a = ");
    /// L?nh nh?p (s? l?y t? b? d?m s? v?a nh?p, sau dó gán vào bi?n)
    scanf("%f",&a);
 
    /// Tuong t?
    printf("Nhap b = ");
    scanf("%f",&b);
 
    printf("Nhap c = ");
    scanf("%f",&c);
 
    /// Tính chi vi
    CV = a+b+c;
    /// Ðua chu vi ra màn hình
    printf("Chu vi = %f\n",CV);
 
    /// Tính p
    p = CV/2;
 
    /// Tính di?n tích
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    /// Ðua k?t qu? ra màn hình
    printf("Dien tich = %f",S);
 
 
    return 0;
