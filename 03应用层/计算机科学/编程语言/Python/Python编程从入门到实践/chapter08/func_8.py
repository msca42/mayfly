def make_album(singer,album,songs=None):
    albums = {
        singer:album
    }
    if songs:
        albums["song_number"] = songs 
    return albums

active = True

while active:
    print("You can quit by enter 'q'")
    name = input("please input singer name")
    if name == 'q':
        break
    album = input("please input album name")
    if album == 'q':
        break
    song_number = input("you can enter song number or enter nothing ")
    info = make_album(name,album,song_number)
    print(info)