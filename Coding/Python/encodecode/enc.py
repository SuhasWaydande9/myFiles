

with open("cat.png", "rb") as image:
  f = image.read()
  b = bytearray(f)
  with open("ol.txt", "a+b") as tf:
    tf.write(b)