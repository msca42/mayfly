# 6.8宠物
pet_info_1 = {
  'master_name':'a',
  'type of animal':'i',
}
pet_info_2 = {
  'master_name':'b',
  'type of animal':'j',
}
pet_info_3 = {
  'master_name':'c',
  'type of animal':'k',
}

pets = [pet_info_1,pet_info_2,pet_info_3]
for pet_info in pets:
  for key,value in pet_info.items():
    print(f"{key}:{value}")