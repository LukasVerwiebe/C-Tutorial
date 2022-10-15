# C-Tutorial: String Funktionen

Dieses Programm enthält Beispiele für die Verwendung von String Funktionen.

## Beschreibung

- Für die Nutzung von Funktionen einer Bibliothek wird #include verwendet, im Anschluss folgt die Angabe der Bibliothek <string.h> (bei dem Beispiel handelt es sich um die String-Bibliothek)
- Funktionen: (Nicht vollständig)
  - strlwr(string1) = wandelt einen String in Lowercase um
  - strupr(string1) = wandelt einen String in Uppercase um
  - strcat(string1, string2) = hängt string2 an das Ende von string1 an
  - strncat(string1, string2, 1) = hängt n Zeichen von string2 an string1 an
  - strcpy(string1, string2) = kopiere string2 nach string1
  - strncpy(string1, string2, 4) = kopiere n Zeichen von string2 nach string1
  - strset(string1, '?') = setzt alle Zeichen einer Zeichenkette auf ein gegebenes Zeichen
  - strnset(string1, 'x', 1) = setzt die ersten n Zeichen einer Zeichenkette auf ein gegebenes Zeichen
  - strrev(string1) = eine Zeichenfolge umkehren
  - strlen(string1) = gibt die Stringlänge als int zurück
  - strcmp(string1, string2) = String vergleicht alle Zeichen
  - strncmp(string1, string2, 1) = String vergleicht n Zeichen
  - strcmpi(string1, string1) = String vergleicht alle Zeichen (Ignoriere Groß- und Kleinschreibung)
  - strnicmp(string1, string1, 1) = String vergleicht n Zeichen (Ignoriere Groß- und Kleinschreibung)

## Bild

![image](https://user-images.githubusercontent.com/63674539/196009932-97bc1346-cc1a-4fd9-a850-7c035014476b.png)
