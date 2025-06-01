import java.util.Scanner;

public class Main3 {
  public static void main(String[] args) {
    // 输入与输出
    System.out.println("A,");
    System.out.println("B,");
    System.out.println("C.");
    System.out.println();
    System.out.println("END");

    double d = 12900000;
    System.out.println(d);
    
    d = 3.1415926;
    System.out.printf("%.2f\n",d);
    System.out.printf("%.4f\n",d);

    int n = 12345000;
    System.out.printf("n = %d, hex = %08x",n,n);

    Scanner scanner =  new Scanner(System.in);
    System.out.println("Input your name: ");
    String name = scanner.nextLine(); 
    System.out.println("Input your age: ");
    int age  = scanner.nextInt();
    System.out.printf("Hi, %s, you are %d\n", name,age);


     n = 70;
    if (n >= 90){
      System.out.println("优秀");
      System.out.println("恭喜你");
    } else if (n >= 60){
      System.out.println("及格了");
    } else{
      System.out.println("挂科了");
    }
    System.out.println("END");


    String s1 = "hello";
    String s2 = "HELLO".toLowerCase();

  }
}
