import java.util.Arrays;

public class Main4 {
  public static void main(String[] args) {
    // 遍历
    int[] ns1 = {1,4,9,16,25};
    for (int i = 0; i < ns1.length; i++) {
        int n = ns1[i];
        System.out.println(n);
    }

    for (int n : ns1) {
      System.out.println(n);
    }

      // 冒泡排序
    int[] ns2 = { 28, 12, 89, 73, 65, 18, 96, 50, 8, 36 };
    System.out.println(Arrays.toString(ns2));
    for (int i = 0; i < ns2.length - 1; i++) {
      for (int j = 0; j < ns2.length- i - 1; j++) {
        if(ns2[j] > ns2[j+1]) {
          int tmp = ns2[j];
          ns2[j] = ns2[j+1];
          ns2[j+1] = tmp;
        }
      }
    }
    System.out.println(Arrays.toString(ns2));

    // 多维数组
     int[][] ns = {
            { 1, 2, 3, 4 },
            { 5, 6, 7, 8 },
            { 9, 10, 11, 12 }
        };
        System.out.println(ns.length); // 3
        System.out.println(Arrays.deepToString(ns));
  }
}
