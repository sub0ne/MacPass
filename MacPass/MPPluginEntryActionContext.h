//
//  MPPluginEntryActionContext.h
//  MacPass
//
//  Created by Michael Starke on 15.02.18.
//  Copyright © 2018 HicknHack Software GmbH. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>

@class MPPlugin;
@class KPKEntry;
@protocol MPEntryActionPlugin;

@interface MPPluginEntryActionContext : NSObject

@property (strong) MPPlugin<MPEntryActionPlugin> *plugin;
@property (copy) NSArray <KPKEntry *> *entries;

- (instancetype)initWithPlugin:(MPPlugin<MPEntryActionPlugin> *)plugin entries:(NSArray <KPKEntry *> *)entries NS_DESIGNATED_INITIALIZER;

@end
