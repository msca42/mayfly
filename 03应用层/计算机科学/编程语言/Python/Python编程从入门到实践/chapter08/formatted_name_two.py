def get_formatted_name(first_name,middle_name,last_name):
    """返回标准格式的姓名"""
    full_name = f"{first_name} {middle_name} {last_name}"
    return full_name.title()

musician = get_formatted_name('jimi','lee','hendrix')
print(musician)