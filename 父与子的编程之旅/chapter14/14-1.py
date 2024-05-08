class Ball:
    def __init__(self, direction):
        self.direction = direction

    def bounce(self):
        if self.direction == "down":
            self.direction = "up"
