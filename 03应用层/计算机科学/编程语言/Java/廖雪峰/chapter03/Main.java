public class Main {
    public static void main(String[] args) {
        Person ming = new Person();
        ming.setBirth(2008);
        System.out.println(ming.getAge());
        // ming.setName("Xiao Ming");
        // ming.setAge(12);
        // System.out.println(ming.getName() + ", " + ming.getAge());

    }
}

class Person {
    private String name;
    private int age;
    private int birth;

    public int getBirth() {
        return birth;
    }

    public void setBirth(int birth) {
        this.birth = birth;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        if (name == null || name.isBlank()) {
            throw new IllegalArgumentException("invalid name");
        }
        this.name = name;
    }

    public int getAge() {
        return calcAge(2019);
    }

    public void setAge(int age) {
        if (age < 0 || age > 100) {
            throw new IllegalArgumentException("invalid age value");
        }
        this.age = age;
    }

    private int calcAge(int currentYear) {
        return currentYear - this.birth;
    }

}
