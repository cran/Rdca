% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Rdca_package.R
\name{decline_predict.harmonic}
\alias{decline_predict.harmonic}
\title{S3 method for class 'decline_predict'}
\usage{
\method{decline_predict}{harmonic}(decline_lst, time_lst)
}
\arguments{
\item{decline_lst}{a list object of class 'decline'}

\item{time_lst}{a list object of class 'time'}
}
\value{
a data frame of decline estimates using the Arps harmonic model
}
\description{
Create a data frame of harmonic decline predictions
}
\references{
\insertRef{Arps1945}{Rdca}
}
