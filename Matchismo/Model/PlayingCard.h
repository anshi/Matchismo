//
//  PlayingCard.h
//  Matchismo
//
//  Created by An Shi on 14-8-27.
//  Copyright (c) 2014年 AS. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
