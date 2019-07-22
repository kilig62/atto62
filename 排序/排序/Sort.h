#pragma once

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>


void printArray(int a[], int size);
void selectSort1(int a[], int size);
void selectSort2(int a[], int size);
void heapify(int a[], int size, int index);
void createHeap(int a[], int size);
void heapSort(int a[], int size);
void bubbleSort(int a[], int size);
int partition1(int a[], int left, int right);
int partition2(int a[], int left, int right);
int partition3(int a[], int left, int right);
void quickSortNoR(int a[], int left, int right);
void quickSort(int a[], int size);
void MergeData(int* array, int left, int mid, int right, int* temp);
void _MergeSort(int* array, int left, int right, int* temp);
void MergeSort(int* array, int size);
void CountSort(int* array, int size);