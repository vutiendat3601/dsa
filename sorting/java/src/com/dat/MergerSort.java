package com.dat;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class MergerSort<T extends Comparable<T>> {

    // Attributes
    private List<T> data;
    private int size;
    // Getters, setters

    // Constructors

    public MergerSort() {
        data = new ArrayList<>();
        size = 0;
    }

    // Input, output

    public void addElement(T e) {
        data.add(size++, e);
    }

    public void showElement() {
        // Collections.sort(data);
        data.forEach(e -> System.out.println(e.toString()));
    }

    // Bussiness code

    public void sort() {
        sort(0, size - 1);
    }

    public void sort(int l, int r) {
        if (l >= r) {
            return;
        }
        int mid = l + (r - l) / 2;
        sort(l, mid);
        sort(mid + 1, r);
        merge(l, r, mid);
    }

    private void merge(int l, int r, int mid) {
        // copy data to temp array
        List<T> lPartData = new ArrayList<>();
        for (int i = l; i <= mid; i++) {
            lPartData.add(i - l, data.get(i));
        }

        List<T> rPartData = new ArrayList<>();
        for (int i = mid + 1; i <= r; i++) {
            rPartData.add(i - (mid + 1), data.get(i));
        }

        int lPartIndex = 0;
        int rPartIndex = 0;
        int dataIndex = l;
        while (lPartIndex < lPartData.size() && rPartIndex < rPartData.size()) {
            if (lPartData.get(lPartIndex).compareTo(rPartData.get(rPartIndex)) < 0) {
                data.set(dataIndex, lPartData.get(lPartIndex));
                lPartIndex++;
            } else {
                data.set(dataIndex, rPartData.get(rPartIndex));
                rPartIndex++;
            }
            dataIndex++;
        }

        while (lPartIndex < lPartData.size()) {
            data.set(dataIndex, lPartData.get(lPartIndex));
            lPartIndex++;
            dataIndex++;
        }

        while (rPartIndex < rPartData.size()) {
            data.set(dataIndex, rPartData.get(rPartIndex));
            rPartIndex++;
            dataIndex++;
        }
    }

    public static void main(String[] args) {
        MergerSort<Student> mS = new MergerSort<>();
        mS.addElement(new Student("01", "Phuong Vy"));
        mS.addElement(new Student("02", "Thanh Giac"));
        mS.addElement(new Student("03", "Hanh Nhi"));
        mS.addElement(new Student("04", "Hai Yen"));
        mS.addElement(new Student("05", "Cam Ly"));
        mS.addElement(new Student("06", "Quy Linh"));
        mS.addElement(new Student("07", "Tien Dat"));
        mS.addElement(new Student("08", "Minh Thuan"));
        mS.addElement(new Student("09", "Bao Chau"));
        mS.addElement(new Student("10", "Leo Messi"));
        mS.addElement(new Student("11", "Cristiano Ronaldo"));
        mS.addElement(new Student("12", "Ter Stegen"));
        mS.addElement(new Student("13", "Tuong Vy"));
        mS.addElement(new Student("14", "Dat Vu"));
        mS.showElement();
        mS.sort();
        System.out.println("__________________________________________________________");
        mS.showElement();
    }
}
