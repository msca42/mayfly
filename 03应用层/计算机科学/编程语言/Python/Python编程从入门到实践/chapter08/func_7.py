def make_album(singer,album,songs=None):
    albums = {
        singer:album
    }
    if songs:
        albums["song_number"] = songs 
    return albums
info = make_album("周杰伦","JAY")
print(info)
info = make_album("周杰伦","范特西")
print(info)
info = make_album("周杰伦","八度空间",10)
print(info)