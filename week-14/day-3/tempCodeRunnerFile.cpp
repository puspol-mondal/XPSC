while (b[0] != mn)
        {
            int val = b.back();
            b.pop_back();
            b.insert(b.begin(), val);
        }
        for (int i = 0; i < m; i++)
        {
            cout << b[i] << " ";
        }