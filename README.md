# randpass

Generates a sequence of random characters, suitable for use as a password.

Options:

 -v Display the version number

 -h Display help text

 -a Restrict the password to alpha-numeric characters

 -n<num> Specify the number of characters in the password

 -r Force the use of the rand() call, rather than using /dev/random or /dev/urandom. Primarily useful for testing.

 -m Generate a random MAC address, e.g. 12:72:e2:b2:62:02

# Examples

    $ randpass                             # Generate a random password
    nqkTNY4A"lG)4ss?_%`<YS'Fj:<{sz|%
    $ randpass -n50                        # Generate a 50 char password
    Z$>Fh%Vu%if.O`x[RuzFV?LsirlKA4\zB%5Exq#zyu}f}&|_LS
    $ randpass -n7                         # Generate a 7 char password
    bcXJQ_g
    $ randpass -a                          # Generate an alphanumeric password
    EXTebO9TEPMh445cAXhgYD3i4ABfV6ES
    $ randpass -an15                       # Generate a 15 char alphanumeric
    4qCeooDmF0KjI0I
    $ randpass -m                          # Generate a random MAC address
    52:72:72:f2:d2:a2

## Using randpass to disguise your network connection

You can use randpass if you want to change your MAC address to a random value. This can be useful if you want to use a public wifi network and don't want leak information about your hardware. This is an example of how to do that on a *nix machine:

First, close your existing wifi connection. Either do this manually or with a script. On a Mac running Mountain Lion you can use:

     $ sudo /System/Library/PrivateFrameworks/Apple80211.framework/Versions/A/Resources/airport -z

Then, change your Mac address using randpass. This command sets the MAC address of the en1 network connection:

     $ sudo ifconfig en1 ether $(randpass -m)

The en1 connection will typically be your WiFi, but you an check by just typing 'ifconfig'. You will then need to re-connect to the network. The network will treat your machine as a different piece of hardware and allocate you a new IP address. You MAC address will be reset if you reboot.
