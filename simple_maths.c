

    double power_recurse(double x, long long int y){    
        if(y == 0) return 1;
        if(y == 1) return x;
        double temp = power_recurse(x, y/2);
        if ( y % 2 == 0) return temp * temp;
        else return x * temp * temp;
    }


    double helper_power(double x, long long int y){
        int isneg = y < 0;
        if(isneg) y *= -1;
        double res = power_recurse(x,y);
        if(isneg) return 1.0/res;
        return res;
    }

    double simple_pow(double x, int y) {
        if(y == 0) return 1.0;
        if(y == 1) return x;
        if(x == 1.0 && y > 0) return x;
        else if(x == 1.0 && y % 2 == 0) return x;
        else if(x == 1.0 && y % 2) return x*-1;
        double res = helper_power(x,y);
        return res;
    }

    int int_sqrt(int x) {
        int n = x;
        int c = 0;
        int d = 1 << 30;
            while (d > n)d >>= 2;
            while (d != 0) {
                if (n >= c + d) {      
                    n -= c + d;        
                    c = (c >> 1) + d; 
                }
                else {
                    c >>= 1;           
                }
                d >>= 2;             
            }
    return c;          
    }




