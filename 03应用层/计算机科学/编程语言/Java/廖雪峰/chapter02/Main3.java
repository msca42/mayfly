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

    // if语句
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
    System.out.println(s1);
    System.out.println(s2);
    if(s1.equals(s2)){
      System.out.println("s1 equals s2");
    } else {
      System.out.println("s1 not equals s2");
    }


    s1 = null;
    if(s1 !=null && s1.equals("hello")) {
      System.out.println("hello");
    }

    // switch多重选择
    int option = 1;
    switch (option) {
      case 1:
        System.out.println("Selected 1");
        break;
      case 2:
        System.out.println("Selected 2");
        break;
      case 3:
        System.out.println("Selected 3");
        break;
      default:
        System.out.println("Selected other");
        break;
    }

    String fruit = "apple";
    switch (fruit) {
      case "apple"-> System.out.println("Selected apple");
      case "pear" -> System.out.println("Selected pear");
      case "mango" -> {
        System.out.println("Selected mango");
        System.out.println("Good choice!");
      }
      default -> System.out.println("No fruit selected");
    }

    //while循环
    int sum = 0;
    n  = 1;
    while (n <= 100) {
      sum = sum + n;
      n++;
    }
    System.out.println(sum);

    // do-while循环
    sum = 0;
    n = 1;
    do {
      sum = sum + n;
      n++;
    }while (n <= 100);
    System.out.println(sum);


    //for循环
    sum = 0;
    for(int i = 1; i <= 100;i++) {
      sum = sum + i;
    }
    System.out.println(sum);

     int[] ns = {1,4,9,16,25};
     for (int s : ns) {
      System.out.println(s);
     }


     //break continue
     sum = 0;
     for(int i = 1;; i++) {
        sum = sum + i;
        if(i == 100){
          break;
        }
     }

     sum = 0;
     for (int i = 1; i <= 10; i++) {
        System.out.println("begin i = " + i);
        if(i % 2 == 0){
          continue;
        }
        sum = sum + i;
        System.out.println("end i = " + i);
     }

  }
}
