def make_album(singer, album):
    info = {}
    info["singer"] = singer
    info["album"] = album
    return info


while True:
    print("You can break in any time while you can input with q")
    singer = input("please input singer: ")
    if singer == 'q':
        break
    album = input('please input album:')
    if album == 'q':
        break
    print(make_album(singer, album))
