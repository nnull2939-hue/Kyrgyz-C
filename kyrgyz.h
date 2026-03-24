/*
 * Версия: 0.4 (ТОЛУК СТАНДАРТ)
 * Платформа: BlackArch Linux
 * Автор: Давид Пузиков
 */

#ifndef KYRGYZ_H
#define KYRGYZ_H

#include <stdio.h>
#include <unistd.h> 
#include <time.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// --- СИСТЕМАГА КИРҮҮ ---
#define КЫРГЫЗ_СИСТЕМА \
"===============================================\n" \
"КЫРГЫЗ СИСТЕМАСЫ v0.4 (ТОЛУК ВЕРСИЯ)\n" \
"Стандарт: C11 (Кыргыз локализациясы)\n" \
"===============================================\n\n"

// --- НЕГИЗГИ ФУНКЦИЯ ---
#define Салам_Кыргызстан \
int main() { \
    setlocale(LC_ALL, ""); \
    printf(КЫРГЫЗ_САЛАМ);

#define Алга_Кыргызстан \
    return 0; \
}

// --- ТИПТЕР (TYPES) ---
#define бүтүн     int
#define калкыма   float
#define кош       double
#define тамга     char
#define узун      long
#define кыска     short
#define бош       void
#define туруктуу  const
#define болду     ;

// --- ЛОГИКА (LOGIC) ---
#define эгерде    if
#define болбосо   else
#define кайтала   while
#define үчүн      for
#define танда     switch
#define учур      case
#define токтот    break
#define кайтар    return

// --- ЧЫГАРУУ (OUTPUT) ---
#define айт_сан(x)      printf("%d\n", x)
#define айт_сөз(x)      printf("%s\n", x)
#define айт_калкыма(x)  printf("%.4f\n", x)
#define билдирүү(x)     printf(x)
#define жаңы_сап        "\n"

// --- КИРГИЗҮҮ (INPUT) ---
#define сура_сан(x)     scanf("%d", &x)
#define сура_сөз(x)     scanf("%s", x)
#define сура_калкыма(x) scanf("%f", &x)

// --- МАТЕМАТИКА (MATH.H) ---
#define тамыр           sqrt
#define даража          pow
#define логарифм        log     // Натуральный логарифм
#define логарифм10      log10   // Десятичный логарифм
#define синус           sin
#define косинус         cos
#define тангенс         tan
#define тегеректе       round
#define абсолют         abs
#define пи              3.14159265

// --- ЭС ТУТУМ ЖАНА СИСТЕМА (STDLIB.H) ---
#define бөлүп_бер       malloc
#define бошот           free
#define кокустук        rand
#define система         system
#define токтотуу        exit

#define уктоо usleep 

#endif