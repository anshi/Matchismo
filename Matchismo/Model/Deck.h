//
//  Deck.h
//  Matchismo
//
//  Created by An Shi on 14-8-27.
//  Copyright (c) 2014年 AS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
