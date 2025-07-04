#!/usr/bin/python3

import cgi

# Get the form data from the request
form = cgi.FieldStorage()

# Extract the form field values
name = form.getvalue('name')
email = form.getvalue('email')
message = form.getvalue('message')

# Print out the form data

body = """
<html>
<body>
<h1>Form Data</h1>
<p>Name: %s</p>
<p>Email: %s</p>
<p>Message: %s</p>
</body>
</html>
""" % (name, email, message)

print ("Content-type: text/html\r")
print ("Content-Length: %d\r" % len(body))
print ("\r")
print (body)
