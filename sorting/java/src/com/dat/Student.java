package com.dat;

public class Student implements Comparable<Student> {
    // Attributes
    private String id;
    private String name;

    // Getters, setters

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    // Constructors

    public Student() {
    }

    public Student(String id, String name) {
        this.id = id;
        this.name = name;
    }

    public Student(String name) {
        this.name = name;
    }

    // Input, output

    // Bussiness code

    @Override
    public String toString() {
        return id + " " + name;
    }

    @Override
    public int compareTo(Student o) {
        return name.compareTo(o.name);
    }
}
