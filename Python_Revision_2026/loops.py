def solve_problem():
    url = "https://api.stocksocial.com/v1/user/anmol/profile"
    url_list = url.split('/')
    for i,val in enumerate(url_list):
        if val == 'user':
            print(url_list[i+1])
            
































    
if __name__ == "__main__":
    solve_problem()