import nltk
import re
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize
from nltk.stem import PorterStemmer

# Download stopwords if not already downloaded
nltk.download('stopwords')
nltk.download('punkt')

# Sample text document
text = "Natural language processing (NLP) is a sub-field of artificial intelligence. It's about developing algorithms to process and understand human language."

# Step 1: Tokenization
def tokenize(text):
    tokens = word_tokenize(text)
    return tokens

# Step 2: Lowercasing
def to_lowercase(tokens):
    return [word.lower() for word in tokens]

# Step 3: Remove Stop Words
def remove_stopwords(tokens):
    stop_words = set(stopwords.words("english"))
    filtered_tokens = [word for word in tokens if word not in stop_words]
    return filtered_tokens

# Step 4: Stemming
def stem_words(tokens):
    stemmer = PorterStemmer()
    stemmed_tokens = [stemmer.stem(word) for word in tokens]
    return stemmed_tokens

# Function to apply all preprocessing steps
def preprocess_text(text):
    tokens = tokenize(text)
    tokens = to_lowercase(tokens)
    tokens = remove_stopwords(tokens)
    tokens = stem_words(tokens)
    return tokens

# Preprocess the sample text
preprocessed_text = preprocess_text(text)
print("Preprocessed Text:", preprocessed_text)
