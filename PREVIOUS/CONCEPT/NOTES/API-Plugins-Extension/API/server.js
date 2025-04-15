const express = require("express");
const app = express();
const port = 3000;

app.use(express.json());

// Sample endpoint
app.get("/api/message", (req, res) => {
  res.json({ message: "Hello, World!" });
});

app.listen(port, () => {
  console.log(`API running at http://localhost:${port}`);
});
