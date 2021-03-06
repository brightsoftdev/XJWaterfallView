//
//  XJPetalViewInfo.h
//  XJWaterfallViewDemo
//
//  Created by Xiantao Jiao on 4/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface XJPetalViewInfo : NSObject {
@private
    NSUInteger index_;
    NSUInteger row_;
    CGRect frame_;
}
@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, assign) NSUInteger row;
@property (nonatomic, assign) CGRect frame;
@end