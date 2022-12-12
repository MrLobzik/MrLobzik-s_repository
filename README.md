# MrLobzik-s_repository

# Sum of positive
Вы получаете массив чисел, возвращаете сумму всех положительных.
Пример [1,-4,7,12] => 1 + 7 + 12 = 20
Примечание: если суммировать нечего, сумма по умолчанию равна 0.

# Return Negative
В этом простом задании вам дается число, и вы должны сделать его отрицательным. А может быть, число уже отрицательное?
Заметки
Число может быть уже отрицательным, и в этом случае никаких изменений не требуется.
Ноль (0) не проверяется на наличие какого-либо конкретного знака. Отрицательные нули не имеют математического смысла.

# Reversed Strings
Завершите решение так, чтобы оно перевернуло переданную в него строку.
'world'  =>  'dlrow'
'word'   =>  'drow'

# Convert boolean values to strings 'Yes' or 'No'.
Завершите метод, который принимает логическое значение и возвращает строку «Yes» для значения «true» или строку «No» для значения «false».

# Remove First and Last Character
Это довольно просто. Ваша цель — создать функцию, которая удаляет первый и последний символы строки. Вам дан один параметр, исходная строка. Вам не нужно беспокоиться
о строках, содержащих менее двух символов.

# Vowel Count
Возвращает количество гласных в заданной строке.
Мы будем рассматривать a, e, i, o, u как гласные (но не y).
Входная строка будет состоять только из строчных букв и/или пробелов.

# Get the Middle Character
Вам дадут слово. Ваша задача — вернуть средний символ слова. Если длина слова нечетная, вернуть средний символ. Если длина слова четная, верните средние 2 символа.
Вход
Слово (строка) длиной 0 < str < 1000 (в javascript вы можете получить чуть больше 1000 в некоторых тестовых примерах из-за ошибки в тестовых примерах). 
Вам не нужно тестировать для этого. Это только здесь, чтобы сказать вам, что вам не нужно беспокоиться о тайм-ауте вашего решения.
Выход
Средний символ (символы) слова, представленного в виде строки.

# Complementary DNA
Дезоксирибонуклеиновая кислота (ДНК) представляет собой химическое вещество, находящееся в ядре клеток и несущее «инструкции» по развитию и функционированию живых
организмов.
В цепочках ДНК символы «А» и «Т» дополняют друг друга, как «С» и «G». Ваша функция получает одну сторону ДНК (строка, кроме Haskell); вам нужно вернуть другую 
дополнительную сторону. Нить ДНК никогда не бывает пустой или ДНК вообще не существует (опять же, кроме Haskell).
Другие подобные упражнения можно найти здесь: http://rosalind.info/problems/list-view/ (источник)
"ATTGC" --> "TAACG"
"GTAT" --> "CATA"

# Multiples of 3 or 5
Если мы перечислим все натуральные числа до 10, кратные 3 или 5, мы получим 3, 5, 6 и 9. Сумма этих кратных равна 23.
Завершите решение так, чтобы оно возвращало сумму всех чисел, кратных 3 или 5, меньше переданного числа. Кроме того, если число отрицательное, верните 0 (для языков, в
которых они есть).
Примечание. Если число кратно и 3, и 5, считайте его только один раз.

# Stop gninnipS My sdroW!
Напишите функцию, которая принимает строку из одного или нескольких слов и возвращает ту же строку, но с перевернутыми всеми словами из пяти или более букв (точно так
же, как имя этого Ката). Передаваемые строки будут состоять только из букв и пробелов. Пробелы будут включены только в том случае, если присутствует более одного
слова.
spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" 
spinWords( "This is a test") => returns "This is a test" 
spinWords( "This is another test" )=> returns "This is rehtona test"

# Sum of Digits / Digital Root
Цифровой корень — это рекурсивная сумма всех цифр числа.
Учитывая n, возьмите сумму цифр n. Если это значение имеет более одной цифры, продолжайте уменьшать таким образом, пока не будет получено однозначное число. Ввод будет
неотрицательным целым числом.
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

# Array.diff
Ваша цель в этом ката — реализовать функцию разности, которая вычитает один список из другого и возвращает результат.
Он должен удалить все значения из списка a, которые присутствуют в списке b, сохраняя их порядок.
arrayDiff([1,2],[1]) == [2]
Если значение присутствует в b, все его вхождения должны быть удалены из другого:
arrayDiff([1,2,2,2,3],[2]) == [1,3]

# Convert string to camel case
Завершите метод/функцию, чтобы он преобразовывал слова, разделенные тире/подчеркиванием, в верблюжий регистр. Первое слово в выводе должно быть написано с заглавной
буквы только в том случае, если исходное слово было написано с заглавной буквы (известный как верхний верблюжий регистр, также часто называемый регистром Паскаля).
Следующие слова всегда должны быть написаны с большой буквы.
"the-stealth-warrior" gets converted to "theStealthWarrior"
"The_Stealth_Warrior" gets converted to "TheStealthWarrior"

# Decode the Morse code
В этом ката вы должны написать простой декодер азбуки Морзе. Хотя азбука Морзе в настоящее время в основном вытеснена голосовыми и цифровыми каналами передачи данных,
она по-прежнему используется в некоторых приложениях по всему миру.
Код Морзе кодирует каждый символ как последовательность «точек» и «тире». Например, буква A кодируется как ·−, буква Q кодируется как −−·−, а цифра 1 кодируется как ·−
−−−. Азбука Морзе нечувствительна к регистру, традиционно используются заглавные буквы. Когда сообщение написано азбукой Морзе, один пробел используется для разделения
кодов символов, а 3 пробела используются для разделения слов. Например, сообщение HEY JUDE на азбуке Морзе имеет вид ···· · −·−− ··−−− ··− −·· ·.
ПРИМЕЧАНИЕ. Лишние пробелы до или после кода не имеют значения и их следует игнорировать.
В дополнение к буквам, цифрам и некоторым знакам препинания существуют специальные служебные коды, наиболее известным из которых является международный сигнал бедствия
SOS (который был впервые выпущен Титаником), который кодируется как ···---··· . Эти специальные коды обрабатываются как отдельные специальные символы и обычно
передаются как отдельные слова.
Ваша задача — реализовать функцию, которая будет принимать на вход азбуку Морзе и возвращать декодированную удобочитаемую строку.
decodeMorse('.... . -.--   .--- ..- -.. .')
//should return "HEY JUDE"
ПРИМЕЧАНИЕ. В целях кодирования вы должны использовать символы ASCII. и -, а не символы Unicode.
Таблица азбуки Морзе предварительно загружена для вас в качестве словаря, не стесняйтесь использовать ее:

Coffeescript/C++/Go/JavaScript/Julia/PHP/Python/Ruby/TypeScript: MORSE_CODE['.--']
C#: MorseCode.Get(".--") (возвращает строку)
F#: MorseCode.get ".--" (возвращает строку)
Elixir: переменная @morse_codes (из использования MorseCode.Constants). Игнорируйте предупреждение о неиспользуемой переменной для morse_codes, потому что оно больше
не используется и сохраняется только для старых решений.
Elm: MorseCodes.get : Dict String String
Haskell: коды Морзе ! ".--" (коды находятся в строке строки карты)
Java: код Морзе.get(".--")
Kotlin: MorseCode[".--"] ?: "" или MorseCode.getOrDefault(".--", "")
Racket: азбука Морзе (хеш-таблица)
Rust: MORSE_CODE
Scala: коды Морзе(".--")
Swift: Азбука Морзе[".--"] ?? "" или азбука Морзе[".--", по умолчанию: ""]
C: предоставляет параллельные массивы, т. е. morse[2] == "-.-" для ascii[2] == "C"
NASM: таблица указателей на коды Морзе и соответствующий список символов ascii.
Все тестовые строки будут содержать действительный код Морзе, поэтому вы можете не проверять наличие ошибок и исключений. В C# тесты завершатся ошибкой, если код
решения вызовет исключение, имейте это в виду. В основном это связано с тем, что в противном случае движок просто проигнорировал бы тесты, что привело бы к
«действительному» решению.

Удачи!
