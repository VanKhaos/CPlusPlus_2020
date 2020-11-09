![](RackMultipart20201109-4-1ker8c0_html_6431c0df22e1bd9a.gif)

# Grundlagen Programmierung
(Praxis Programmierung mit C++)

# **Inhalte**

- Datentypen &amp; Variablen
- Kontrollstrukturen
  - Verzweigungen ( if … else … )
  - Schleifen ( while … do … )
- Komplexe Datentypen
- Design
- Programmablaufplan
- Nassi-Shneiderman Diagramm
- Pseudo Code
- Funktionen
- Bibliotheken
- Fehlerbehandlung

# **Kommentare**

**// Zeilen Kommentar**
Nach dem Kommentar endet die Zeile &amp; der Kommentar
 ![](RackMultipart20201109-4-1ker8c0_html_a75602188d168349.png)

**/\* Block Kommentar \*/**
 ![](RackMultipart20201109-4-1ker8c0_html_4c71ac205f27f7c0.png)

# **Trennzeichen**

Trennzeichen dienen dazu Zeichenketten zu trennen oder zu verknüpfen.
 Auch schließen diese eine Zeile oder ein Codeabschnitt ab.

- Leerzeichen
- Semikolon ; | Kommando Ende
- Kommentare
- Operatoren
  - b. + - \* / (Mathematische Operatoren)
- Komma

# **Bezeichner**

Die Bezeichner sind die Namen von Klassen, Funktionen oder Variablen.
 Sie können Alphanumerisch sein, müssen aber bestimme Regeln einhalten.

- Ziffern, Buchstaben &amp; Unterstriche sind erlaubt
 Sonderzeichen, Umlaute sind nicht erlaubt


- Das erste Zeichen darf keine Nummer sein
 int 0Null ist nicht erlaubt
 int Null0 ist erlaubt
 int \_0Null ist erlaubt


- Groß- &amp; Kleinschreibung wird unterschieden
 int Null und int null sind zwei verschiedene Variablen


- Bezeichner dürfen keine Schlüsselwörter sein

# **Programmiersprachen**

Es gibt viele verschiedene Programmiersprachen. Jede Programmiersprache hat seine eigenen Schlüsselwörter und Syntax. Die Schlüsselwörter und Syntax sind teilweise in verschiedenen Programmiersprachen ähnlich.

| **Übersetzte Programmiersprachen** | **Interpretierte Programmiersprachen** |
| --- | --- |
| C / C++, C#, Fortan, Cobol, Visual Basic | PHP, JavaScript, PowerShell, Python,
 Visual Basic Script (VBS) |
| Explizierte Datentypen
- Datentypen müssen FEST zugeordnet werden

Int, char, float, long, string, …. | Implizierte Datentypen
- Datentypen werden anhand des Wertes zugeordnet

123 = int
 12.3 = double
 &quot;123&quot; = text |

# **Zusammensetzung eines Programms**

![](RackMultipart20201109-4-1ker8c0_html_2e78e4aa25b74e42.gif) ![](RackMultipart20201109-4-1ker8c0_html_ed6ccb986285db46.gif)

![](RackMultipart20201109-4-1ker8c0_html_9b25509f2e6c91b7.gif) **\*.h**
**\*.cpp**
 Header Datei
 Quellcode / Programmcode

![](RackMultipart20201109-4-1ker8c0_html_58a5670b67389c44.gif)

![](RackMultipart20201109-4-1ker8c0_html_935ace2f7d8592e5.gif)

**COMPILER**
**Verwandelt Header &amp; Quellcode
 in ein Objekt um**

![](RackMultipart20201109-4-1ker8c0_html_1a9086bbe1de9cd4.gif)

![](RackMultipart20201109-4-1ker8c0_html_2724e553c08e42d5.gif)
**\*.obj**

![](RackMultipart20201109-4-1ker8c0_html_55be5f57d877d9db.gif)

![](RackMultipart20201109-4-1ker8c0_html_f6fbadd247cbd9a5.gif) ![](RackMultipart20201109-4-1ker8c0_html_3b12b9a5d15935a0.gif)

**BINDER**
**(Deutsch: Linker)**

![](RackMultipart20201109-4-1ker8c0_html_6333337777db6d9c.gif) **\*.lib**
 Bibliotheken

![](RackMultipart20201109-4-1ker8c0_html_6ebb73e2af9fa0de.gif)

![](RackMultipart20201109-4-1ker8c0_html_bdd2106c926bcb2d.gif)

**\*exe**
 Ausführbare Datei

# **Datei Aufbau**

Eine Datei ist immer in mehreren &quot;Abschnitte&quot; unterteilt.

![](RackMultipart20201109-4-1ker8c0_html_1364d55402b1f19d.gif)

![](RackMultipart20201109-4-1ker8c0_html_c78065a107a9c7d6.gif) ![](RackMultipart20201109-4-1ker8c0_html_2a5ecf9be53fe1f3.gif)

Compiler Anweisungen

![](RackMultipart20201109-4-1ker8c0_html_eac3f2ce9305f0b9.gif) ![](RackMultipart20201109-4-1ker8c0_html_c3d38609e3487619.gif)

Definitionen
 Deklarationen

\*cpp
 Quellcode / Programmcode

![](RackMultipart20201109-4-1ker8c0_html_a8b50adfe73caad.gif)

Klassen
 Hauptfunktionen

**Compiler Anweisung**

Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.

**Definition / Deklarationen**

Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.

**Klassen / Hauptfunktionen**

Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.

# **Nassi-Shneiderman Diagramm**

Ein Nassi-Shneiderman-Diagramm ist ein Diagrammtyp zur Darstellung von Programmentwürfen im Rahmen der Methode der strukturierten Programmierung.

![](RackMultipart20201109-4-1ker8c0_html_eba42eef6609704e.png)

_Abbildung 1 | Nassi Shneiderman Blöcke_

# **Programmablaufplan (PAP)**

Ein Programmablaufplan ist ein Ablaufdiagramm für ein Computerprogramm, das auch als Flussdiagramm oder Programmstrukturplan bezeichnet wird. Es ist eine grafische Darstellung zur Umsetzung eines Algorithmus in einem Programm und beschreibt die Folge von Operationen zur Lösung einer Aufgabe.

![](RackMultipart20201109-4-1ker8c0_html_ee8e402e66159a5a.png)

_Abbildung 2 | Links PAP - Rechts Nassi-Shneidman Diagramm_

# **Datentypen**

Datentypen definieren den Typ von Daten (Werten) der gespeichert werden kann.

| **Name** | **Wert** | **Größe** |
| --- | --- | --- |
| **bool** | true / false | 1 Byte |
| **char** | -128 bis 127 | 1 Byte |
| **Ganze Zahlen z.B. 123** |
| **short** | −32.768 bis 32.767 | 2 Byte |
| **long** | –2.147.483.648 bis 2.147.483.647 | 4 Byte |
| **long long** | –9.223.372.036.854.755.808 bis 9.223.372.036.854.755.807 | 8 Byte |
| **Komma Zahlen z.B. 1.23** |
| **float** | 1.2E-38 bis 3.4E+38 | 4 Byte |
| **double** | 2.3E-308 1.7E+308 | 8 Byte |
| **C++ Only** |
| **long double** | 3.4E-4932 1.1E+4932 | 12 Byte |

# **Modifizierer**

Dienen dazu Datentypen zu bearbeiten

| **Name** | **Beschreibung** |
| --- | --- |
| **const** | Konstante | der Wert des Datentyps kann nicht verändert werden |
| **signed** | Datentyp mit Vorzeichen | Standard |
| **unsigned** | Datentyp ohne Vorzeichen |

# **Variablen**

Syntax:

_Modifizierer + Datentyp + Bezeichner = Wert;_

Modifizierer und Wert sind Optional. Sollte der Modifizierer **&quot;const&quot;** angeben werden, so ist der Wert zwingend erforderlich.

**int** _zahl_ = 0; **unsigned**  **char** _zeichen_ = 255;
**long** _longzahl_ = 0; **bool** _logisch_ = true
**short** _shortzahl_ = 0; **float** _kommazahl_ = 3.14;

**const**** double**_pi_ = 3.14;
 Der Wert _pi_ muss direkt angegeben werden.

# **Gültigkeitsbereich**

Der Gültigkeitsbereich gibt einen Bereich an wo eine Variable sichtbar ist.
 Es gibt den Globalen und den Lokalen Gültigkeitsbereich.

**Globale Sichtbarkeit**
Eine Variable die außerhalb von { } definiert werden sind Global und von überall in der Datei zur Verwendung frei gegeben.

**Lokale Sichtbarkeit**
 Wird eine Variable innerhalb von { } definiert, so ist diese nur in den vorher bestimmten teil des Quellcodes gültig und verwendbar.

 ![](RackMultipart20201109-4-1ker8c0_html_fd06d8cf3f0d7cbb.png)

**Hierarchie**
Variablen folgen einer bestimmten Hierarchie.

 **Global -\&gt; Lokal** Sollte eine Globale Variable Lokal nochmal neu definiert werden, so zählt die Lokale Variable für den Programm abschnitt.

# **Implizierte / Explizierte Umwandlung**

Bei Umwandlung von Datentypen geht es nur von dem aktuellen Datentyp auf den nächst kleineren (Implizierte Umwandlung) oder auf den nächst größeren (Explizierte Umwandlung) Datentyps

**Impliziert**
von klein auf groß
bool -\&gt; char -\&gt; short -\&gt; …

**Expliziert**
von groß auf klein
long double -\&gt; double -\&gt; …

long long -\&gt; long -\&gt; … -\&gt; bool

# **Kontrollstrukturen**

Mit Kontrollstrukturen lassen sich Variablen mit einer Bedingung prüfen. So kann ein Codeblock erst durchgeführt werden, wenn die Überprüfung TRUE oder FALSE ist.
 Eine weitere Kontrollstruktur sind die Schleifen mit denen wir ein Codeblock solange durchlaufen lassen können bis die Bedingung erfüllt wurde.


**Verzweigung**

- Einfache Verzweigungen
  - Ja / Nein Entscheidung
  - Operatoren Entscheidung

![](RackMultipart20201109-4-1ker8c0_html_eba8b52287b94b4f.png) ![](RackMultipart20201109-4-1ker8c0_html_9e32e2cbbdacc378.png)

**Syntax:**

![](RackMultipart20201109-4-1ker8c0_html_70234b6e2e461745.png)

Um nur den **FALSE / NEIN** Block zu erhalten, muss die Bedingung mit einem **!** negiert werden.

![](RackMultipart20201109-4-1ker8c0_html_fd9ea6201f73b3bf.png)

- Komplexe / Mehrfache Verzweigungen

**if else**

![](RackMultipart20201109-4-1ker8c0_html_f5e6e359977f52da.png)

**If else if**

![](RackMultipart20201109-4-1ker8c0_html_1a1aaaf66193f0fe.png)

![](RackMultipart20201109-4-1ker8c0_html_fef018a0f9abec8c.png) ![](RackMultipart20201109-4-1ker8c0_html_7f8912dfb5f3a9f5.png) ![](RackMultipart20201109-4-1ker8c0_html_85e35195d5e4e56c.png)

**Switch**

![](RackMultipart20201109-4-1ker8c0_html_89b2bb38b93b2de9.png)

Die Variable zur Überprüfung muss Nummerisch sein, damit diese im **CASE** (Fall) abgefragt werden kann. Sollte die Variable mit dem des **CASE** übereinstimmen, wird der Codeblock bis zum **BREAK** ; ausgeführt.
 Es wird immer bis zum nächsten **BREAK** ; abgearbeitet, auch wenn dieser erst im nächsten **CASE** steht.

![](RackMultipart20201109-4-1ker8c0_html_b688b2ca89d9d63e.png)

**Schleifen**

- Kopfgesteuert
  - Zählschleife / for
  - so lange bis / while
  - über eine Liste / for each

![](RackMultipart20201109-4-1ker8c0_html_4aab9d13ebaf2b05.png)

![](RackMultipart20201109-4-1ker8c0_html_9c5e204d1c15129f.png)
 ![](RackMultipart20201109-4-1ker8c0_html_6e5bf9e50c539f2.png)

![](RackMultipart20201109-4-1ker8c0_html_e2e52ef3dc2e4fa9.png)
 ![](RackMultipart20201109-4-1ker8c0_html_7a9da8050edaeffc.png)

![](RackMultipart20201109-4-1ker8c0_html_265f57c8a7ef1ef8.png)

- Fussgesteuert
  - so lange bis

![](RackMultipart20201109-4-1ker8c0_html_df70544b81eea7cf.png)

![](RackMultipart20201109-4-1ker8c0_html_9b5304c964aee2a4.png)

![](RackMultipart20201109-4-1ker8c0_html_9f80267b7b7698f1.png)

**Bedingungen**
Die Bedingungen werden genutzt um Entscheidung bei den Verzweigungen &amp; Schleifen fest zu legen.

- Einfache Bedingung
  - Wert Operator Vergleichswert
 3 \&lt; 4 || &quot;Hallo&quot; == &quot;Guten Tag&quot;
 Gibt TRUE oder FALSE zurück

**Komplexe Bedingungen**
Komplexe Bedingungen werden mit Hilfe eines Operators &quot;verknüpft&quot;. So kann man Prüfen ob die eine Bedingung erfüllt ist oder eine andere oder ob alle Bedingungen erfüllt oder nicht erfüllt wurden.

- Logische Operatoren
  - **||** ODER
  - **&amp;&amp;** UND
  - **!** NICHT

**Syntax:**

Bedingung1 Operator Bedingung2

**Operatoren**
Damit die Bedingung auch weiß was und wie sie etwas vergleichen soll, gibt es die Operatoren.

- Einfache Vergleichsoperatoren
  - **\&lt;** größer als
  - **\&gt;** kleiner als
  - **\&lt;=** größer oder gleich als
  - **=\&gt;** kleiner oder gleich als
  - **==** genau gleich
  - **!=** nicht gleich

**Konditionaloperator**
Es ist eine vereinfachte **if-Anweisung** die aber direkt einer Variablen zugewiesen oder im Output verwendet werden kann.

![](RackMultipart20201109-4-1ker8c0_html_efd7655063cbb724.png)

![](RackMultipart20201109-4-1ker8c0_html_96a0d553edae293.png)

Die Ausgabe hier wäre: _Wert ist: gleich 0_
 Wäre die Variable nicht 0 würde in der Ausgabe stehen: _Wert ist: ungleich 0


 TO DO_
