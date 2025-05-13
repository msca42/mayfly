public class Main5 {
    public static void main(String[] args) {
        char c1 = 'A';
        char c2 = '中';

        int n1 = 'A';
        int n2 = '中';

        char c3 = '\u0041';
        char c4 = '\u4e2d';

        String s = "";
        String s1 = "A";
        String s2 = "ABC";
        String s3 = "中文 ABC";
    
        s = "abc\"xyz";
        s = "abc\\xyz";

        s1 = "Hello";
        s2 = "World";
        s = s1 + " " + s2 + "!";
        System.out.println(s);

        int age = 25;
        s = "age is " + age;
        System.out.println(s);

        s = "first line \n"
            + "second line \n"
            + "end";

        s = """
            SELECT * FROM
              users
            WHERE id > 100
            ORDER BY name DESC    
            """;
        System.out.println(s);

        s = "hello";
        System.out.println(s);
        s = "world";
        System.out.println(s);

        s = "hello";
        String t = s;
        System.out.println(t);

        s1 = null;
        s2 = s1;
        s3 = "";
    }
}
