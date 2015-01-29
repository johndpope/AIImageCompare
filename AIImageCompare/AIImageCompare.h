// Copyright (c) 2014 Alejandro Isaza <al@isaza.ca>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <TargetConditionals.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
typedef UIImage AIImage;
#else
#import <AppKit/AppKit.h>
typedef NSImage AIImage;
#endif

/**
 Find the Mean Absolute Error (MAE) between two images of the same size. This is the most common way of finding if two images differ and by what amount.
 */
CG_EXTERN CGFloat AIImageMeanAbsoluteError(AIImage* image1, AIImage* image2);

/**
 Find the Root Mean Square Error (RMSE) between two images of the same size. The RMSE puts more weight in large-magnitude variations than the MAE.
 */
CG_EXTERN CGFloat AIImageRootMeanSquareError(AIImage* image1, AIImage* image2);

/**
 Find the number of pixels that are different between two images of the same size.
 */
CG_EXTERN NSUInteger AIImageDifferentPixelCount(AIImage* image1, AIImage* image2);

/**
 Find the ratio of pixels that are different between two images of the same size. This value is between 0 and 1, where 0 means the images are identical and 1 means that the images have no pixels in common.
 */
CG_EXTERN CGFloat AIImageDifferentPixelRatio(AIImage* image1, AIImage* image2);
