class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        try:
            if dividend != 0:
                ret = int(dividend / divisor)
                if ret >= 2**31:
                    return ret - 1
                elif ret < -2 ** 31:
                    return ret + 1
                else:
                    return ret
            else:
                return 0
        except Exception as error:
            print(f"[ERROR] divide: {error}")