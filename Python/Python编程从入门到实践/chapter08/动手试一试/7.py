def make_album(singer, album, songnumber=None):
    info = {}
    info["singer"] = singer
    info["album"] = album
    if songnumber:
        info["songnumber"] = songnumber
    return info


print(make_album('周杰伦', 'JAY'))
print(make_album('周杰伦', '范特西'))
print(make_album('周杰伦', '八度空间', 10))
