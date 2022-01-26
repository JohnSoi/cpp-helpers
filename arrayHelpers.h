const int MAX_SIZE = 100;

/**
 * Получение случайного числа
 *
 * @param delimiter Конец интервала значений
 * @param minDigit Начало интервала значений
 * @return Случайное число в интервале
 */
inline int getRandomDigit(int delimiter = 15, int minDigit = 0);

/**
 * Заполнение двумерного массива
 *
 * @param arr Ссылка на массив
 * @param column Количество строк
 * @param row Количество столбцов
 */
void inputDoubleArr(int arr[][MAX_SIZE], int column, int row);

/**
 * Вывод двумерного массива на экран
 *
 * @param arr Ссылка на массив
 * @param column Количество строк
 * @param row Количество столбцов
 */
void printDoubleArr(int arr[][MAX_SIZE], int column, int row);

/**
 * Заполнение одномерного массива
 *
 * @param arr Ссылка на массив
 * @param size Количсевто элементов
 */
void inputArr(int arr[], int size);

/**
 * Вывод одномерного массива
 *
 * @param arr Ссылка на массив
 * @param size Количсевто элементов
 */
void printArr(int arr[], int size);

/**
 * Получение индекса и
 * значения минимального и максимального значения в массиве
 *
 * @param arr Массив
 * @param size Размер
 */
void getMinMaxValueAndIndexInArr(int arr[], int size);

/**
 * Возращает обратный массив
 *
 * @param arr Массив
 * @param size Размер
 * @return Указатель на новый обратный массив
 */
void reverseArr(int arr[], int revArr[], int size);
