# a8lst2unix
"Atari 8 Bit Listing to UNIX" replaces special Atari 8 Bit characters mostly in BASIC Listings with codes of their keystrokes.

Outputs names get a .txt added

Files will be overwritten WITHOUT ANY WARNING!

This tiny little command line tool helps to create readable outputs of Atari-BASIC, Turbo-BASIC, and probably other Listing-Files, which may heavily rely on special characters. This nowerdays might be named as binary blobs within strings.
As Atari-BASIC does not restrict strings to hold only printable characters, but also pseudo-graphics, control-(escape-)sequences, machine language code, character sets, and bitmap-graphics, it makes it hard to re-issue those listings in readable form on other platforms than Ataris own, either as a binary file, or on an ATR disk-image.

The used way to provide Atari BASIC Listing is to share either an Atari Disk Image (ATR), or a zipped or raw binary SAVEd or LISTed BASIC file.
Those files had to be LOADed or ENTERed in order to be displayed on an actual Atari screen (or emulator). So, there is no need to type in, but instead there are many other steps to do from e.g. a forum-post to the eye of the reader.

a8lst2unix follows the pattern of the old Happy Computer style way of presenting special characters in type-in-listings.

As this program is pretty simple, it should compile on all major platforms. Have fun sharing type-in-listings via the ABBUC forum!
