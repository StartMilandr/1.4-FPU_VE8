
int main(void)
{
  static float a = 1.2;
  static float b = 1.2;
  
  volatile float rMul, rAdd, rSub, rDiv;
  
  while (1)
  {
    //  Clear
    rMul = rAdd = rSub = rDiv = 0;
    
    //  Calc Result
    rMul = a * b;
    rAdd = a + b;
    rSub = a - b;
    rDiv = a / b;
  }  

}  