Rinclude ".\nums.h"

variables {
    clicked-cursor-x                    : Number                = 100
    clicked-cursor-y                    : Number                = 101
variables {
    clicked-cursor-x                    : Number                = 100
    clicked-cursor-y                    : Number                = 101

    sentence-loop-counter               : Number                = 104
    last-noun1                          : Object                = 105
    last-noun2                          : Object                = 106
    selected-verb                       : Verb                  = 107
    selected-noun1                      : Object                = 108
    selected-noun2                      : Object                = 109
    selected-prep                       : Verb                  = 110

    selected-verb-hold                  : Verb                  = 112

    var-*                               : Verb                  = 117
    var-*                               : Verb                  = 118
    last-obj                                                    = 120
    last-entered-door                   : Object                = 121
    double-verb                         : Verb                  = 123
    last-double-verb                    : Verb                  = 124
            
    inv-pointer                         : Number                = 126 ; Current top inventory row
    objnums                             : Array                 = 141
    icon-number                         : Object                = 161
    give-to-actor-script                : Script                = 163
    talk-to-actor-script                : Script                = 164
    choice                              : Verb                  = 165
    dialog-ypos                                                 = 166
    screen-escape-array                                         = 167
    dialog-actor                        : Actor                 = 176 ; *unsure* about name
    last-dialog-actor                   : Actor                 = 177
    dialog-key                          : Key                   = 178
    dont-wait-for-dialog-lines          : Boolean               = 179
    look-at-actor-script                : Script                = 180
    actor-looked-at                     : Actor                 = 181
    companion-actor                     : Actor                 = 182
        
    room-locals                                                 = 209
    room-local1                                                 = 210
    room-local2                                                 = 211
    room-local3                                                 = 212
    room-local4                                                 = 213
    room-local5                                                 = 214
    room-local6                                                 = 215
    room-local7                                                 = 216
    room-local8                                                 = 217
    room-local9                                                 = 218
    room-local10                                                = 219
    room-local11                                                = 220
    room-local12                                                = 221
    room-local13                                                = 222
        
    last-room                           : Room                  = 224

    orichalcum-count                                            = 229
    know-collection                     : CollegeCollection     = 233
    chest-collection                    : CollegeCollection     = 234
    bookshelf-collection                : CollegeCollection     = 235
    wax-cat-collection                  : CollegeCollection     = 236

    chosen-path                         : GamePath              = 238
    dialogue-lesser-distance                                    = 239 ; randomly chosen distance to Lesser colony
    dialogue-random-passage-1                                   = 240
    dialogue-random-passage-2                                   = 241
    dialogue-random-passage-3                                   = 242
    dialogue-random-passage-4                                   = 243
    balloon-clicked-obj                 : Object                = 251
    balloon-altitude                    : Number                = 252
    balloon-x                           : Number                = 253
    balloon-y                           : Number                = 254
    balloon-x-speed                     : Number                = 255
    balloon-y-speed                     : Number                = 256
    
    full-screen-obj-name-color          : PaletteIndex          = 307
    ui-cover-image                      : Object                = 308

    magazine-read-count                 : Number                = 313
    engine-credit-color                 : PaletteIndex          = 314
    last-room-from-map                  : Room                  = 315

    fight-key-hit                       : Key                   = 318
    indy-fight-action                   : FightAction           = 319
    opponent-fight-action               : FightAction           = 320
    indy-max-health                     : Number                = 321
    indy-health                         : Number                = 322
    default-indy-max-power-when-blocked : Number                = 323 ; this is actually just copied to indy-max-power-when-blocked, which never changes
    default-indy-max-power              : Number                = 324 ; this is actually just copied to indy-max-power, which never changes
    
    opponent-health                     : Number                = 326
    opponent-speed                      : Number                = 327 ; jiffies between opponent moves
    chance-of-opponent-blocking         : Number                = 328
    opponent-max-power-when-blocked     : Number                = 329
    opponent-max-power                  : Number                = 330
    opponent-power-when-blocked         : Number                = 331
    opponent-power                      : Number                = 332
    chance-of-opponent-blocking-while-attacking : Number        = 333
    opponent-regain-power               : Number                = 334
    chance-of-opponent-attacking        : Number                = 335
    combos-for-opponent-stepback        : Number                = 336
    chance-of-counter-attack            : Number                = 337
    indy-max-power-when-blocked         : Number                = 338
    indy-max-power                      : Number                = 339
    indy-power-when-blocked             : Number                = 340
    indy-power                          : Number                = 341

    consecutive-steps-back              : Number                = 343
    indy-combo-counter                  : Number                = 344
    fight-opponent                      : Actor                 = 345
    indy-fight-forward-distance         : Number                = 346 ; amount to change x to move forward during fight (negative when Indy is on the right)
    opponent-fight-forward-distance     : Number                = 347 ; amount to change opponent's x to move forward during fight (negative when opponent is on the right)
    fight-bounds-min                    : Number                = 348
    fight-bounds-max                    : Number                = 349
    opponent-max-health                 : Number                = 350
    indy-x                              : Coordinate            = 351
    indy-y                              : Coordinate            = 352
    opponent-x                          : Coordinate            = 353
    opponent-y                          : Coordinate            = 354
    fight-hit-x                         : Coordinate            = 355
    fight-hit-y                         : Coordinate            = 356
    key-block-high                      : Key                   = 357
    key-block-mid                       : Key                   = 358
    key-block-low                       : Key                   = 359
    key-attack-high                     : Key                   = 360
    key-attack-mid                      : Key                   = 361
    key-attack-low                      : Key                   = 362
    key-stepback-high                   : Key                   = 363
    key-stepback-mid                    : Key                   = 364
    key-stepback-low                    : Key                   = 365
    key-knockout                        : Key                   = 366
    fight-outcome                       : FightOutcome          = 367
    grocer-needs-gift-for               : GrocerNeedsGiftFor    = 372
    grocer-favorite-color               : GrocerColor           = 373
    junk-from-omar                      : JunkFromOmar          = 374

    asked-for-squab-times               : Number                = 377
    persuade-sophia-step                : Number                = 378

    trottier-reason                     : TrottierReason        = 381
    trottier-fear                       : TrottierFear          = 382
    trottier-need                       : TrottierNeed          = 383

    room-with-sophia-in-pit                                     = 411
    map-room-door-team-index                                    = 412
    
    path-to-thera-digsite               : Object                = 414
    salvage-miles                       : Number                = 415
    salvage-direction                                           = 416

    beads-in-dish-count                 : Number                = 424

    foo                                 : Any                   = 442 ; Note: Although foo can be any type (that's why it's "foo"), we explicitly type it as Any here, in order to avoid type inference casting it into a specific type for the entire game.
    foo2                                : Any                   = 443
    return-value                        : Number                = 444
    return-x                            : Number                = 445
    return-y                            : Number                = 446
    save-game-enabled                   : Boolean               = 447
    build-sentence-script-backup        : Script                = 448
            
    indy-quotient                                               = 450
    total-indy-quotient                                         = 451
    credit-display-duration             : Number                = 452
                
    walking-to-x                                                = 465
    walking-to-y                                                = 466

    credits-display-duration-adjustment : Number                = 489
    inv-lines                           : Number                = 490

    minimum-heap                        : Number                = 493
}

bit-variables {
    actor-stuck                 [5:Actor]           = 0
    dont-say-dialog-lines                           = 5 ; Used in dialog to indicate chosen line should not be spoken
    bit-*                                           = 6 ; Set but never used?
    say-screen-escape           [9:Number]          = 7
    bit-*                                           = 16
    sophia-present                                  = 17
    bit-*                                           = 18 ; Used by build-sentence
    big-override-hit                                = 19 ; Skips to New York; original LucasArts name
    dialog-ui-active                                = 20
    hide-inventory                                  = 21 ; Used e.g. when displaying indy quotient in inventory area
    bit-*                                           = 22 ; Set in build-sentence
    bit-*                                           = 23 ; Checked before iMUSE clean-up, set by autosave...
    can-look-at-sophia                              = 24 ; Disabled temporarily in desert and sub-interior.
    bit-*                                           = 25 ; Keeping track of queue for playing "detecting-orichalcum-theme"...
    fish-pointed-at-necklace                        = 26
    sophia-visible-in-transit                       = 27
    realized-fish-detects-necklace                  = 28
    bit-*                                           = 29 ; Never set. If enabled, exits Sophia's necklace close-up if trying to take it.
    bit-*                                           = 30 ; Set but never used.
    reached-end-of-credits                          = 31 ; For end credits
    fade-in-credit-header                           = 32 ; For end credits
    fade-out-credit-header                          = 33 ; For end credits
    end-credit-display-done                         = 34 ; For end credits
    opening-credit-display-done                     = 35 ; For opening credits
    escaping-atlantis                               = 36 ; Set when leaving God Machine center
    flags                       [32:Number]         = 37 ; Flags which are repurposed between rooms; in other words, local flags.
    finished-intro                                  = 69
    presentation-step1                              = 70 ; Keeps track of how far we are in Sophia's presentation - true = Indy tried to interrupt once
    presentation-step2                              = 71 ; Keeps track of how far we are in Sophia's presentation - true = Indy tried to interrupt twice
    got-rid-of-stagehand                            = 72
    bit-*                                           = 73 ; Set to false in Sophia's study - never used?
    bit-*                                           = 74 ; Set to true in Sophia's study, when leaving for Iceland
    met-kerner                                      = 77 ; first-time for entering office and meeting Kerner - never used again
    been-inside-theater                             = 78
    visited-new-york                                = 79 ; first-time for arriving in New York
    offended-sophia                                 = 82
    convinced-biff-indy-is-a-fan                    = 83 ; ... more or less
    called-biff-ape                                 = 84
    lost-to-biff                                    = 85 ; first-time for dialogue after losing to Biff
    going-nowhere                                   = 86 ; clicking on your current location on the world map
    dest-available              [9:TravelDestination]= 87
    bit-*                       [9]                 = 96 ; doesn't seem to be used - some bits are set but never read, others are read but never set.
    bit-*                                           = 105
    used-knockout                                   = 106
    mouse-fighting                                  = 107
    custom-fight-stats                              = 108 ; Indicates that a script has set its own initial stats for fight.
    indy-talked-to-costa                            = 109
    sophia-talked-to-costa                          = 110
    azores-flags                [9]                 = 111
    azores-flags-2              [15]                = 120
    ; 135-136 - part of second array or just unused?
    costa-will-trade                                = 137
    found-costas-house                              = 138 ; first-time for being outside Costa's door
    ; 139 unused
    costa-flags                 [8]                 = 140
    bit-*                                           = 148
    anaconda-gone                                   = 149
    
    introduced-to-sternhart                         = 151
    yucatan-dialog-flags        [4]                 = 152
    yucatan-dialog-flags-2      [10]                = 156
    bit-*                                           = 166 ; Yucatan - related to Sternhart and entering the temple for the first time...
    
    yucatan-temple-dialog-flags [5]                 = 168
    
    sternhart-gone                                  = 174
    talked-to-sternhart                             = 175 ; ... so he stopped trying to sell his souvenirs
    mentioned-name-to-sternhart                     = 176
    discussed-lamp-stealing                         = 177
    bit-*                                           = 178 ; opened tomb?
    yucatan-dialog-flags-3      [4]                 = 179
    bit-*                       [2]                 = 183
    entered-yucatan-temple                          = 185
    bit-*                                           = 186 ; eel figurine melted ice?
    told-about-sternhart-and-costa                  = 187 ; first-time ... from Heimdall
    know-heimdalls-spaceport-theory                 = 188
    
    visited-iceland                                 = 200 ; first-time for arriving in Iceland
    found-lost-dialogue                             = 210
    opened-ice-box                                  = 213
    looked-at-mayonnaise                            = 214
    hurt-self-with-arrowhead                        = 216
    lost-dialogue-in-chest                          = 217
    lost-dialogue-in-bookshelf                      = 218
    lost-dialogue-in-wax-cat                        = 219
    found-trottier                                  = 226
    trottier-hotel-dialog       [9]                 = 233
    seance-dialog               [SeanceDialog]      = 244
    
    attempted-ghost-act                             = 265
    sophia-met-trottier                             = 267
    introduced-to-omar                              = 268 ; in his store
    
    algiers-flags               [14]                = 275
    algiers-market-dialog       [12]                = 289

    world-map-picture                               = 316

    showed-stone-to-omar                            = 323
    
    sophia-algiers-dialog       [6]                 = 327
    
    talked-to-beggar                                = 335
    
    room-is-dark                                    = 351 ; Dig site

    look-at-camel-count                             = 370

    been-at-algiers-dig-site                        = 381

    coordinates-are-correct                         = 443
    attempted-dive                                  = 444

    tried-to-wear-diving-suit                       = 446

    cageroom-dialog             [12]                = 524
    got-rid-of-cageroom-guard                       = 540
    sunstone-in-spindle                             = 650
    moonstone-in-spindle                            = 651
    worldstone-in-spindle                           = 652
    correct-stone-combination                       = 653
    got-coordinates-wrong                           = 732

    looked-at-beads                                 = 735
}

string-variables {
    pause-string                                    = 4
    restart-string                                  = 5
    quit-game-string                                = 6
    SAVE-string                                     = 7
    LOAD-string                                     = 8
    PLAY-string                                     = 9
    CANCEL-string                                   = 10
    QUIT-string                                     = 11
    OK-string                                       = 12
    insert-disk-string                              = 13
    must-enter-name-string                          = 14
    game-not-saved-string                           = 15
    game-not-loaded-string                          = 16
    saving-string                                   = 17
    loading-string                                  = 18
    save-a-game-string                              = 19
    load-a-game-string                              = 20
    save-load-colors                                = 21 ; Seems like it - 42 items, like MI2
    save-load-heading-string			    = 28
    current-iq-points                               = 30
    total-iq-points                                 = 31
    
    version                                         = 37
    salvage-direction-string                        = 38
    plato-collection-name                           = 39
    titles-scale-sequence                           = 40
    dialog-text-1                                   = 41
    dialog-text-2                                   = 42
    dialog-text-3                                   = 43
    dialog-text-4                                   = 44
    dialog-text-5                                   = 45
    dialog-text-6                                   = 46
    dialog-text-7                                   = 47
    dialog-text-8                                   = 48
    dialog-text-9                                   = 49
}

room-locals room-locals {
    college-basement {
        horned-statue-locker : Object
        applied-gum-to-shoe  : Boolean
    }
    
    new-york-street {
        get-past-biff-attempts : Number
        here-for-sophia-chosen-count : Number
    }
    
    desert-over {
        room-local0
        room-local1
        room-local2
        room-local3
        compass-chore : Chore
        wind-x
        wind-y
        room-south : Room
        room-north : Room
        room-west : Room
        room-east : Room
    }
    
    sea-over {
        room-local0
        room-local1
        room-local2
        room-local3
        compass-chore : Chore
        wind-x
        wind-y
        room-south : Room
        room-north : Room
        room-west : Room
        room-east : Room
    }
}

type GamePath {
    undetermined                                    = 0
    team-path                                       = 3 ; trust
    fists-path                                      = 1 ; action
    wits-path                                       = 2 ; maze
}

type UserfaceMode {
    save-normal-verbs       = 1
    normal-verbs            = 2
    verbs-off               = 3
    inventory-verbs         = 4
    dialog-verbs            = 5
    insult-verbs            = 6
}

type CollegeCollection {
    unknown-collection      = 0
    ashkenazy-collection    = 1
    dunlop-collection       = 2
    pearce-collection       = 3
    sprague-collection      = 4
    ward-collection         = 5
}

type TrottierReason {
    reason-horoscope        = 1
    reason-tarot            = 2
    reason-numerology       = 3
    reason-book-of-changes  = 4
}

type TrottierNeed {
    need-advisor            = 1
    need-truth              = 2
    need-money              = 3
    need-nothing            = 4
}

type TrottierFear {
    fear-nazi-agents        = 1
    fear-competitors        = 2
    fear-wife               = 3
    fear-fakers             = 4
}

type SeanceDialog {
    said-going-to-work      = 0
    said-under-spell        = 1
    passed-reason-test      = 2
    passed-need-test        = 3
    passed-fear-test        = 4
    passed-guessing-game    = 5
}

type JunkFromOmar {
    junk-baseball           = 0
    junk-voodoo-doll        = 1
    junk-red-wagon          = 2
    junk-yoyo               = 3
    junk-cane               = 4
    junk-opaque-glasses     = 5
    junk-fez                = 6
    junk-spitoon            = 7
    junk-soap               = 8
    junk-veil               = 9
    junk-lipstick           = 10
    junk-scarf              = 11
    junk-earrings           = 12
    junk-comb               = 13
    junk-ring               = 14
    junk-buckle             = 15
}

type GrocerNeedsGiftFor {
    son                     = 0
    grandfather             = 1
    mother-in-law           = 2
    wife                    = 3
}

type GrocerColor {
    color-white             = 0
    color-black             = 1
    color-red               = 2
    color-yellow            = 3
}

type FightAction {
    none                    = 0
    block-high              = 6
    block-mid               = 7
    block-low               = 8
    attack-high             = 9
    attack-mid              = 10
    attack-low              = 11
    step-back               = 16
    knockout                = 20
}

type FightOutcome {
    undecided               = 0
    win                     = 1
    loss                    = 2
    run-away                = 3
}

type CauseOfDeath {
    bad-whip-handling-DISABLED      = -26024
    lost-fight                      = 1
    impatient-rolf                  = 13
    bringing-fists-to-gunfight      = 14
    shot-by-kerner                  = 23
    lack-of-disguise                = 24
    spotted-by-submarine-sailors    = 25
    indecision-on-lava-stream       = 28
    shortlived-godhood              = 29
    drowned                         = 31
    being-a-wise-guy                = 32
}

type TravelDestination {
    dest-leningrad                  = 0 ; dropped before release
    dest-azores                     = 1
    dest-cadiz                      = 2 ; dropped before release
    dest-yucatan                    = 3
    dest-montecarlo                 = 4
    dest-morocco                    = 5
    dest-santorini                  = 6 ; = thera
    dest-crete                      = 7
    dest-iceland                    = 8
}
